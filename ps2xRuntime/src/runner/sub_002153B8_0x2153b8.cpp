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

// Function: sub_002153B8
// Address: 0x2153b8 - 0x21549c
void sub_002153B8_0x2153b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002153B8_0x2153b8");
#endif

    switch (ctx->pc) {
        case 0x2153e4u: goto label_2153e4;
        case 0x215414u: goto label_215414;
        case 0x215438u: goto label_215438;
        case 0x215458u: goto label_215458;
        case 0x215468u: goto label_215468;
        case 0x215478u: goto label_215478;
        default: break;
    }

    ctx->pc = 0x2153b8u;

    // 0x2153b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2153b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2153bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2153bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2153c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2153c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2153c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2153c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2153c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2153cc: 0x26500078  addiu       $s0, $s2, 0x78
    ctx->pc = 0x2153ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x2153d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2153d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2153d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2153d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2153d8: 0x8e531fc0  lw          $s3, 0x1FC0($s2)
    ctx->pc = 0x2153d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8128)));
    // 0x2153dc: 0xc08595a  jal         func_216568
    ctx->pc = 0x2153DCu;
    SET_GPR_U32(ctx, 31, 0x2153E4u);
    ctx->pc = 0x2153E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2153DCu;
    // 0x2153e0: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216568u, 0x2153DCu, 0x2153E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2153E4u;
label_2153e4:
    // 0x2153e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2153e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2153e8: 0x50430026  beql        $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2153E8u;
    {
        const bool branch_taken_0x2153e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2153e8) {
            ctx->pc = 0x2153ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2153E8u;
            // 0x2153ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215484u;
            goto label_215484;
        }
    }
    ctx->pc = 0x2153F0u;
    // 0x2153f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2153f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2153f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2153F4u;
    {
        const bool branch_taken_0x2153f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2153F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2153F4u;
        // 0x2153f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2153f4) {
            ctx->pc = 0x21540Cu;
            goto label_21540c;
        }
    }
    ctx->pc = 0x2153FCu;
    // 0x2153fc: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x2153fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x215400: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x215400u;
    {
        const bool branch_taken_0x215400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x215404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215400u;
        // 0x215404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215400) {
            ctx->pc = 0x215480u;
            goto label_215480;
        }
    }
    ctx->pc = 0x215408u;
    // 0x215408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21540c:
    // 0x21540c: 0xc07fb24  jal         func_1FEC90
    ctx->pc = 0x21540Cu;
    SET_GPR_U32(ctx, 31, 0x215414u);
    ctx->pc = 0x215410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21540Cu;
    // 0x215410: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC90u, 0x21540Cu, 0x215414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215414u;
label_215414:
    // 0x215414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215418: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x215418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x21541c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21541cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215420: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x215420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x215424: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x215424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215428: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x215428u;
    {
        const bool branch_taken_0x215428 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x21542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215428u;
        // 0x21542c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215428) {
            ctx->pc = 0x215480u;
            goto label_215480;
        }
    }
    ctx->pc = 0x215430u;
    // 0x215430: 0xc083e90  jal         func_20FA40
    ctx->pc = 0x215430u;
    SET_GPR_U32(ctx, 31, 0x215438u);
    ctx->pc = 0x20FA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA40u, 0x215430u, 0x215438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215438u;
label_215438:
    // 0x215438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21543c: 0x8e630114  lw          $v1, 0x114($s3)
    ctx->pc = 0x21543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
    // 0x215440: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x215440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215444: 0x43302a  slt         $a2, $v0, $v1
    ctx->pc = 0x215444u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x215448: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x215448u;
    {
        const bool branch_taken_0x215448 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215448u;
        // 0x21544c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215448) {
            ctx->pc = 0x215480u;
            goto label_215480;
        }
    }
    ctx->pc = 0x215450u;
    // 0x215450: 0xc088902  jal         func_222408
    ctx->pc = 0x215450u;
    SET_GPR_U32(ctx, 31, 0x215458u);
    ctx->pc = 0x222408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222408u, 0x215450u, 0x215458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215458u;
label_215458:
    // 0x215458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21545c: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x21545cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x215460: 0xc083e90  jal         func_20FA40
    ctx->pc = 0x215460u;
    SET_GPR_U32(ctx, 31, 0x215468u);
    ctx->pc = 0x215464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215460u;
    // 0x215464: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA40u, 0x215460u, 0x215468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215468u;
label_215468:
    // 0x215468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x215468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21546c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21546cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215470: 0xc083e80  jal         func_20FA00
    ctx->pc = 0x215470u;
    SET_GPR_U32(ctx, 31, 0x215478u);
    ctx->pc = 0x215474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215470u;
    // 0x215474: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FA00u, 0x215470u, 0x215478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215478u;
label_215478:
    // 0x215478: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x215478u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21547c: 0x2e020001  sltiu       $v0, $s0, 0x1
    ctx->pc = 0x21547cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_215480:
    // 0x215480: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x215480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_215484:
    // 0x215484: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x215484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x215488: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x215488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21548c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21548cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215490: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x215490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215494: 0x3e00008  jr          $ra
    ctx->pc = 0x215494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215494u;
        // 0x215498: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21549Cu;
}

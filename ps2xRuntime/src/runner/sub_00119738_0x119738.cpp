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

// Function: sub_00119738
// Address: 0x119738 - 0x119804
void sub_00119738_0x119738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119738_0x119738");
#endif

    switch (ctx->pc) {
        case 0x119764u: goto label_119764;
        case 0x11979cu: goto label_11979c;
        case 0x1197b8u: goto label_1197b8;
        case 0x1197e4u: goto label_1197e4;
        default: break;
    }

    ctx->pc = 0x119738u;

    // 0x119738: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x119738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11973c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11973cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x119740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119744: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119748: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11974c: 0x111282  srl         $v0, $s1, 10
    ctx->pc = 0x11974cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 10));
    // 0x119750: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x119750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x119754: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x119754u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119758: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x119758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11975c: 0xc046028  jal         func_1180A0
    ctx->pc = 0x11975Cu;
    SET_GPR_U32(ctx, 31, 0x119764u);
    ctx->pc = 0x119760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11975Cu;
    // 0x119760: 0x28180  sll         $s0, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x11975Cu, 0x119764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119764u;
label_119764:
    // 0x119764: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x119764u;
    {
        const bool branch_taken_0x119764 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x119768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119764u;
        // 0x119768: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119764) {
            ctx->pc = 0x11978Cu;
            goto label_11978c;
        }
    }
    ctx->pc = 0x11976Cu;
    // 0x11976c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11976cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x119770: 0x322203ff  andi        $v0, $s1, 0x3FF
    ctx->pc = 0x119770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1023);
    // 0x119774: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x119774u;
    {
        const bool branch_taken_0x119774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x119778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119774u;
        // 0x119778: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119774) {
            ctx->pc = 0x11978Cu;
            goto label_11978c;
        }
    }
    ctx->pc = 0x11977Cu;
    // 0x11977c: 0x24424148  addiu       $v0, $v0, 0x4148
    ctx->pc = 0x11977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16712));
    // 0x119780: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x119780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x119784: 0x54710007  bnel        $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x119784u;
    {
        const bool branch_taken_0x119784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x119784) {
            ctx->pc = 0x119788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119784u;
            // 0x119788: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1197A4u;
            goto label_1197a4;
        }
    }
    ctx->pc = 0x11978Cu;
label_11978c:
    // 0x11978c: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x11978Cu;
    {
        const bool branch_taken_0x11978c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x119790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11978Cu;
        // 0x119790: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11978c) {
            ctx->pc = 0x1197E8u;
            goto label_1197e8;
        }
    }
    ctx->pc = 0x119794u;
    // 0x119794: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x119794u;
    SET_GPR_U32(ctx, 31, 0x11979Cu);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x119794u, 0x11979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11979Cu;
label_11979c:
    // 0x11979c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11979Cu;
    {
        const bool branch_taken_0x11979c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1197A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11979Cu;
        // 0x1197a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11979c) {
            ctx->pc = 0x1197E8u;
            goto label_1197e8;
        }
    }
    ctx->pc = 0x1197A4u;
label_1197a4:
    // 0x1197a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1197a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1197a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1197A8u;
    {
        const bool branch_taken_0x1197a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1197ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197A8u;
        // 0x1197ac: 0xde110018  ld          $s1, 0x18($s0) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197a8) {
            ctx->pc = 0x1197D0u;
            goto label_1197d0;
        }
    }
    ctx->pc = 0x1197B0u;
    // 0x1197b0: 0xc04647e  jal         func_1191F8
    ctx->pc = 0x1197B0u;
    SET_GPR_U32(ctx, 31, 0x1197B8u);
    ctx->pc = 0x1191F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191F8u, 0x1197B0u, 0x1197B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1197B8u;
label_1197b8:
    // 0x1197b8: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x1197b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1197bc: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x1197bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
    // 0x1197c0: 0x43182f  dsubu       $v1, $v0, $v1
    ctx->pc = 0x1197c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1197c4: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1197c4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1197c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1197C8u;
    {
        const bool branch_taken_0x1197c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1197CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197C8u;
        // 0x1197cc: 0x223882d  daddu       $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197c8) {
            ctx->pc = 0x1197D4u;
            goto label_1197d4;
        }
    }
    ctx->pc = 0x1197D0u;
label_1197d0:
    // 0x1197d0: 0xfe120018  sd          $s2, 0x18($s0)
    ctx->pc = 0x1197d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 18));
label_1197d4:
    // 0x1197d4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1197D4u;
    {
        const bool branch_taken_0x1197d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1197D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197D4u;
        // 0x1197d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197d4) {
            ctx->pc = 0x1197E8u;
            goto label_1197e8;
        }
    }
    ctx->pc = 0x1197DCu;
    // 0x1197dc: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x1197DCu;
    SET_GPR_U32(ctx, 31, 0x1197E4u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x1197DCu, 0x1197E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1197E4u;
label_1197e4:
    // 0x1197e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1197e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1197e8:
    // 0x1197e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1197e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1197ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1197ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1197f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1197f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1197f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1197f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1197f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1197f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1197fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1197FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1197FCu;
        // 0x119800: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1197FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119804u;
}

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

// Function: sub_00219770
// Address: 0x219770 - 0x219830
void sub_00219770_0x219770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219770_0x219770");
#endif

    switch (ctx->pc) {
        case 0x2197a0u: goto label_2197a0;
        case 0x2197bcu: goto label_2197bc;
        case 0x2197dcu: goto label_2197dc;
        case 0x219804u: goto label_219804;
        default: break;
    }

    ctx->pc = 0x219770u;

    // 0x219770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x219774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21977c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21977cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219780: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x219780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219784: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219788: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x219788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21978c: 0x26130d30  addiu       $s3, $s0, 0xD30
    ctx->pc = 0x21978cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x219790: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x219790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x219794: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x219794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x219798: 0xc08685a  jal         func_21A168
    ctx->pc = 0x219798u;
    SET_GPR_U32(ctx, 31, 0x2197A0u);
    ctx->pc = 0x21979Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219798u;
    // 0x21979c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A168u, 0x219798u, 0x2197A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197A0u;
label_2197a0:
    // 0x2197a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2197a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2197a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2197a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2197a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2197a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2197ac: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2197ACu;
    {
        const bool branch_taken_0x2197ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2197B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197ACu;
        // 0x2197b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197ac) {
            ctx->pc = 0x2197E4u;
            goto label_2197e4;
        }
    }
    ctx->pc = 0x2197B4u;
    // 0x2197b4: 0xc08660c  jal         func_219830
    ctx->pc = 0x2197B4u;
    SET_GPR_U32(ctx, 31, 0x2197BCu);
    ctx->pc = 0x219830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219830u, 0x2197B4u, 0x2197BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197BCu;
label_2197bc:
    // 0x2197bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2197bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2197c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2197c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2197c4: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x2197c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2197c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2197c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2197cc: 0xae66027c  sw          $a2, 0x27C($s3)
    ctx->pc = 0x2197ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 636), GPR_U32(ctx, 6));
    // 0x2197d0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2197d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2197d4: 0xc088570  jal         func_2215C0
    ctx->pc = 0x2197D4u;
    SET_GPR_U32(ctx, 31, 0x2197DCu);
    ctx->pc = 0x2197D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197D4u;
    // 0x2197d8: 0xae630280  sw          $v1, 0x280($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2215C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2215C0u, 0x2197D4u, 0x2197DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2197DCu;
label_2197dc:
    // 0x2197dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2197DCu;
    {
        const bool branch_taken_0x2197dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2197E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197DCu;
        // 0x2197e0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197dc) {
            ctx->pc = 0x2197F0u;
            goto label_2197f0;
        }
    }
    ctx->pc = 0x2197E4u;
label_2197e4:
    // 0x2197e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2197E4u;
    {
        const bool branch_taken_0x2197e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2197E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2197E4u;
        // 0x2197e8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2197e4) {
            ctx->pc = 0x219810u;
            goto label_219810;
        }
    }
    ctx->pc = 0x2197ECu;
    // 0x2197ec: 0x0  nop
    ctx->pc = 0x2197ecu;
    // NOP
label_2197f0:
    // 0x2197f0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2197f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2197f4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2197F4u;
    {
        const bool branch_taken_0x2197f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2197f4) {
            ctx->pc = 0x2197F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2197F4u;
            // 0x2197f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x219810u;
            goto label_219810;
        }
    }
    ctx->pc = 0x2197FCu;
    // 0x2197fc: 0xc086980  jal         func_21A600
    ctx->pc = 0x2197FCu;
    SET_GPR_U32(ctx, 31, 0x219804u);
    ctx->pc = 0x219800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2197FCu;
    // 0x219800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A600u, 0x2197FCu, 0x219804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219804u;
label_219804:
    // 0x219804: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x219804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x219808: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x219808u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x21980c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21980cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219810:
    // 0x219810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219814: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219818: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21981c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21981cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219820: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x219820u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219824: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x219824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219828: 0x3e00008  jr          $ra
    ctx->pc = 0x219828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219828u;
        // 0x21982c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219830u;
}

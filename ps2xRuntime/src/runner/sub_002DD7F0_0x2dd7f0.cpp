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

// Function: sub_002DD7F0
// Address: 0x2dd7f0 - 0x2dd880
void sub_002DD7F0_0x2dd7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD7F0_0x2dd7f0");
#endif

    switch (ctx->pc) {
        case 0x2dd82cu: goto label_2dd82c;
        case 0x2dd84cu: goto label_2dd84c;
        case 0x2dd868u: goto label_2dd868;
        default: break;
    }

    ctx->pc = 0x2dd7f0u;

    // 0x2dd7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dd7f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dd7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dd7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dd7fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dd800: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dd800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd804: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2DD804u;
    {
        const bool branch_taken_0x2dd804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD804u;
        // 0x2dd808: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd804) {
            ctx->pc = 0x2DD868u;
            goto label_2dd868;
        }
    }
    ctx->pc = 0x2DD80Cu;
    // 0x2dd80c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2dd80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2dd810: 0x244279e0  addiu       $v0, $v0, 0x79E0
    ctx->pc = 0x2dd810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31200));
    // 0x2dd814: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2dd814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x2dd818: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x2dd818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2dd81c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD81Cu;
    {
        const bool branch_taken_0x2dd81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd81c) {
            ctx->pc = 0x2DD830u;
            goto label_2dd830;
        }
    }
    ctx->pc = 0x2DD824u;
    // 0x2dd824: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DD824u;
    SET_GPR_U32(ctx, 31, 0x2DD82Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DD824u, 0x2DD82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD82Cu;
label_2dd82c:
    // 0x2dd82c: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x2dd82cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_2dd830:
    // 0x2dd830: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD830u;
    {
        const bool branch_taken_0x2dd830 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD830u;
        // 0x2dd834: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd830) {
            ctx->pc = 0x2DD850u;
            goto label_2dd850;
        }
    }
    ctx->pc = 0x2DD838u;
    // 0x2dd838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd83c: 0x24427570  addiu       $v0, $v0, 0x7570
    ctx->pc = 0x2dd83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30064));
    // 0x2dd840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dd840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd844: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x2DD844u;
    SET_GPR_U32(ctx, 31, 0x2DD84Cu);
    ctx->pc = 0x2DD848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD844u;
    // 0x2dd848: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x2DD844u, 0x2DD84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD84Cu;
label_2dd84c:
    // 0x2dd84c: 0x0  nop
    ctx->pc = 0x2dd84cu;
    // NOP
label_2dd850:
    // 0x2dd850: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dd850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2dd854: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dd854u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dd858: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD858u;
    {
        const bool branch_taken_0x2dd858 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2DD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD858u;
        // 0x2dd85c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd858) {
            ctx->pc = 0x2DD868u;
            goto label_2dd868;
        }
    }
    ctx->pc = 0x2DD860u;
    // 0x2dd860: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2DD860u;
    SET_GPR_U32(ctx, 31, 0x2DD868u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2DD860u, 0x2DD868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD868u;
label_2dd868:
    // 0x2dd868: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dd868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd86c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dd86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd878: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD878u;
        // 0x2dd87c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD880u;
}

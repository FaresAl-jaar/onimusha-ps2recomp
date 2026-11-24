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

// Function: sub_002E0630
// Address: 0x2e0630 - 0x2e06b0
void sub_002E0630_0x2e0630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0630_0x2e0630");
#endif

    switch (ctx->pc) {
        case 0x2e0670u: goto label_2e0670;
        case 0x2e067cu: goto label_2e067c;
        case 0x2e0694u: goto label_2e0694;
        default: break;
    }

    ctx->pc = 0x2e0630u;

    // 0x2e0630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e0630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e0634: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e0634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e0638: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e063c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e0640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0644: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E0644u;
    {
        const bool branch_taken_0x2e0644 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0644u;
        // 0x2e0648: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0644) {
            ctx->pc = 0x2E0698u;
            goto label_2e0698;
        }
    }
    ctx->pc = 0x2E064Cu;
    // 0x2e064c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e064cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2e0650: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2e0650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x2e0654: 0x24427a30  addiu       $v0, $v0, 0x7A30
    ctx->pc = 0x2e0654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31280));
    // 0x2e0658: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x2e0658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2e065c: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2e065cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x2e0660: 0x24a5f2f0  addiu       $a1, $a1, -0xD10
    ctx->pc = 0x2e0660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963952));
    // 0x2e0664: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2e0664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e0668: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2E0668u;
    SET_GPR_U32(ctx, 31, 0x2E0670u);
    ctx->pc = 0x2E066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0668u;
    // 0x2e066c: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2E0668u, 0x2E0670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0670u;
label_2e0670:
    // 0x2e0670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0674: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x2E0674u;
    SET_GPR_U32(ctx, 31, 0x2E067Cu);
    ctx->pc = 0x2E0678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0674u;
    // 0x2e0678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x2E0674u, 0x2E067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E067Cu;
label_2e067c:
    // 0x2e067c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2e067cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2e0680: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e0680u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2e0684: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0684u;
    {
        const bool branch_taken_0x2e0684 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2E0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0684u;
        // 0x2e0688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0684) {
            ctx->pc = 0x2E0698u;
            goto label_2e0698;
        }
    }
    ctx->pc = 0x2E068Cu;
    // 0x2e068c: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2E068Cu;
    SET_GPR_U32(ctx, 31, 0x2E0694u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2E068Cu, 0x2E0694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0694u;
label_2e0694:
    // 0x2e0694: 0x0  nop
    ctx->pc = 0x2e0694u;
    // NOP
label_2e0698:
    // 0x2e0698: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e0698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e069c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e069cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e06a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e06a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e06a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e06a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e06a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E06A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E06ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E06A8u;
        // 0x2e06ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E06A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E06B0u;
}

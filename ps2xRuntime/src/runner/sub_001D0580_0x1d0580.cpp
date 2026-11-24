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

// Function: sub_001D0580
// Address: 0x1d0580 - 0x1d0690
void sub_001D0580_0x1d0580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0580_0x1d0580");
#endif

    switch (ctx->pc) {
        case 0x1d05a0u: goto label_1d05a0;
        case 0x1d0634u: goto label_1d0634;
        case 0x1d0644u: goto label_1d0644;
        case 0x1d0650u: goto label_1d0650;
        case 0x1d0658u: goto label_1d0658;
        case 0x1d0664u: goto label_1d0664;
        case 0x1d067cu: goto label_1d067c;
        case 0x1d0684u: goto label_1d0684;
        default: break;
    }

    ctx->pc = 0x1d0580u;

    // 0x1d0580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0584: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d058c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d058cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0590: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1d0590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1d0594: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x1d0594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
    // 0x1d0598: 0x2484c640  addiu       $a0, $a0, -0x39C0
    ctx->pc = 0x1d0598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952512));
    // 0x1d059c: 0x2463c690  addiu       $v1, $v1, -0x3970
    ctx->pc = 0x1d059cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952592));
label_1d05a0:
    // 0x1d05a0: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x1d05a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1d05a4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1d05a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1d05a8: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x1d05a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1d05ac: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1d05acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1d05b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d05b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d05b4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1d05b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1d05b8: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1d05b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d05bc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1d05bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1d05c0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d05c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d05c4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1d05c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1d05c8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1d05c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1d05cc: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1d05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1d05d0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1d05d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1d05d4: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1d05d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1d05d8: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1d05d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x1d05dc: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x1d05dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x1d05e0: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x1d05e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x1d05e4: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x1d05e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x1d05e8: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x1d05e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x1d05ec: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x1d05ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x1d05f0: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x1d05f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x1d05f4: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x1d05f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x1d05f8: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x1d05f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x1d05fc: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x1d05fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x1d0600: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x1d0600u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x1d0604: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x1d0604u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
    // 0x1d0608: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x1d0608u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
    // 0x1d060c: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x1d060cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x1d0610: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1D0610u;
    {
        const bool branch_taken_0x1d0610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0610u;
        // 0x1d0614: 0xaca0003c  sw          $zero, 0x3C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0610) {
            ctx->pc = 0x1D05A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d05a0;
        }
    }
    ctx->pc = 0x1D0618u;
    // 0x1d0618: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1d0618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1d061c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1d061cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1d0620: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1d0620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1d0624: 0xaf8087e8  sw          $zero, -0x7818($gp)
    ctx->pc = 0x1d0624u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936552), GPR_U32(ctx, 0));
    // 0x1d0628: 0xaf8087ec  sw          $zero, -0x7814($gp)
    ctx->pc = 0x1d0628u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936556), GPR_U32(ctx, 0));
    // 0x1d062c: 0xc05e3a4  jal         func_178E90
    ctx->pc = 0x1D062Cu;
    SET_GPR_U32(ctx, 31, 0x1D0634u);
    ctx->pc = 0x1D0630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D062Cu;
    // 0x1d0630: 0xff8087e0  sd          $zero, -0x7820($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936544), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E90u, 0x1D062Cu, 0x1D0634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0634u;
label_1d0634:
    // 0x1d0634: 0xaf8287f0  sw          $v0, -0x7810($gp)
    ctx->pc = 0x1d0634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936560), GPR_U32(ctx, 2));
    // 0x1d0638: 0x8f8487f0  lw          $a0, -0x7810($gp)
    ctx->pc = 0x1d0638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
    // 0x1d063c: 0xc076bf8  jal         func_1DAFE0
    ctx->pc = 0x1D063Cu;
    SET_GPR_U32(ctx, 31, 0x1D0644u);
    ctx->pc = 0x1D0640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D063Cu;
    // 0x1d0640: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAFE0u, 0x1D063Cu, 0x1D0644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0644u;
label_1d0644:
    // 0x1d0644: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1d0644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1d0648: 0xc07cc40  jal         func_1F3100
    ctx->pc = 0x1D0648u;
    SET_GPR_U32(ctx, 31, 0x1D0650u);
    ctx->pc = 0x1D064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0648u;
    // 0x1d064c: 0x2484c6e0  addiu       $a0, $a0, -0x3920 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3100u, 0x1D0648u, 0x1D0650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0650u;
label_1d0650:
    // 0x1d0650: 0xc09627c  jal         func_2589F0
    ctx->pc = 0x1D0650u;
    SET_GPR_U32(ctx, 31, 0x1D0658u);
    ctx->pc = 0x2589F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2589F0u, 0x1D0650u, 0x1D0658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0658u;
label_1d0658:
    // 0x1d0658: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1d0658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1d065c: 0xc0742d4  jal         func_1D0B50
    ctx->pc = 0x1D065Cu;
    SET_GPR_U32(ctx, 31, 0x1D0664u);
    ctx->pc = 0x1D0660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D065Cu;
    // 0x1d0660: 0x2484cff0  addiu       $a0, $a0, -0x3010 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B50u, 0x1D065Cu, 0x1D0664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0664u;
label_1d0664:
    // 0x1d0664: 0x3c040087  lui         $a0, 0x87
    ctx->pc = 0x1d0664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
    // 0x1d0668: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d0668u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d066c: 0x2484cff0  addiu       $a0, $a0, -0x3010
    ctx->pc = 0x1d066cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954992));
    // 0x1d0670: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0674: 0xc0742ec  jal         func_1D0BB0
    ctx->pc = 0x1D0674u;
    SET_GPR_U32(ctx, 31, 0x1D067Cu);
    ctx->pc = 0x1D0678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0674u;
    // 0x1d0678: 0x24c6fd30  addiu       $a2, $a2, -0x2D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BB0u, 0x1D0674u, 0x1D067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D067Cu;
label_1d067c:
    // 0x1d067c: 0xc09d904  jal         func_276410
    ctx->pc = 0x1D067Cu;
    SET_GPR_U32(ctx, 31, 0x1D0684u);
    ctx->pc = 0x276410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276410u, 0x1D067Cu, 0x1D0684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0684u;
label_1d0684:
    // 0x1d0684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0688: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0688u;
        // 0x1d068c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0690u;
}

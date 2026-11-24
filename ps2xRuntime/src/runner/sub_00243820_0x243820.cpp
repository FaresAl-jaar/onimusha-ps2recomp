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

// Function: sub_00243820
// Address: 0x243820 - 0x2438b0
void sub_00243820_0x243820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243820_0x243820");
#endif

    switch (ctx->pc) {
        case 0x243820u: goto label_243820;
        case 0x243824u: goto label_243824;
        case 0x243828u: goto label_243828;
        case 0x24382cu: goto label_24382c;
        case 0x243830u: goto label_243830;
        case 0x243834u: goto label_243834;
        case 0x243838u: goto label_243838;
        case 0x24383cu: goto label_24383c;
        case 0x243840u: goto label_243840;
        case 0x243844u: goto label_243844;
        case 0x243848u: goto label_243848;
        case 0x24384cu: goto label_24384c;
        case 0x243850u: goto label_243850;
        case 0x243854u: goto label_243854;
        case 0x243858u: goto label_243858;
        case 0x24385cu: goto label_24385c;
        case 0x243860u: goto label_243860;
        case 0x243864u: goto label_243864;
        case 0x243868u: goto label_243868;
        case 0x24386cu: goto label_24386c;
        case 0x243870u: goto label_243870;
        case 0x243874u: goto label_243874;
        case 0x243878u: goto label_243878;
        case 0x24387cu: goto label_24387c;
        case 0x243880u: goto label_243880;
        case 0x243884u: goto label_243884;
        case 0x243888u: goto label_243888;
        case 0x24388cu: goto label_24388c;
        case 0x243890u: goto label_243890;
        case 0x243894u: goto label_243894;
        case 0x243898u: goto label_243898;
        case 0x24389cu: goto label_24389c;
        case 0x2438a0u: goto label_2438a0;
        case 0x2438a4u: goto label_2438a4;
        case 0x2438a8u: goto label_2438a8;
        case 0x2438acu: goto label_2438ac;
        default: break;
    }

    ctx->pc = 0x243820u;

label_243820:
    // 0x243820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_243824:
    // 0x243824: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x243824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
label_243828:
    // 0x243828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24382c:
    // 0x24382c: 0x2442e970  addiu       $v0, $v0, -0x1690
    ctx->pc = 0x24382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961520));
label_243830:
    // 0x243830: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x243830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_243834:
    // 0x243834: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x243834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_243838:
    // 0x243838: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_24383c:
    if (ctx->pc == 0x24383Cu) {
        ctx->pc = 0x24383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243838u;
        // 0x24383c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243840u;
        goto label_243840;
    }
    ctx->pc = 0x243838u;
    {
        const bool branch_taken_0x243838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243838u;
        // 0x24383c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243838) {
            ctx->pc = 0x243850u;
            goto label_243850;
        }
    }
    ctx->pc = 0x243840u;
label_243840:
    // 0x243840: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x243840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_243844:
    // 0x243844: 0x2484bb60  addiu       $a0, $a0, -0x44A0
    ctx->pc = 0x243844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949728));
label_243848:
    // 0x243848: 0x8090d8a  j           func_243628
label_24384c:
    if (ctx->pc == 0x24384Cu) {
        ctx->pc = 0x24384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243848u;
        // 0x24384c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243850u;
        goto label_243850;
    }
    ctx->pc = 0x243848u;
    ctx->pc = 0x24384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243848u;
    // 0x24384c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    sub_00243628_0x243628(rdram, ctx, runtime); return;
    ctx->pc = 0x243850u;
label_243850:
    // 0x243850: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
label_243854:
    if (ctx->pc == 0x243854u) {
        ctx->pc = 0x243858u;
        goto label_243858;
    }
    ctx->pc = 0x243850u;
    {
        const bool branch_taken_0x243850 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x243850) {
            ctx->pc = 0x243868u;
            goto label_243868;
        }
    }
    ctx->pc = 0x243858u;
label_243858:
    // 0x243858: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x243858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24385c:
    // 0x24385c: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x24385cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
label_243860:
    // 0x243860: 0x8090d8a  j           func_243628
label_243864:
    if (ctx->pc == 0x243864u) {
        ctx->pc = 0x243864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243860u;
        // 0x243864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243868u;
        goto label_243868;
    }
    ctx->pc = 0x243860u;
    ctx->pc = 0x243864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243860u;
    // 0x243864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    sub_00243628_0x243628(rdram, ctx, runtime); return;
    ctx->pc = 0x243868u;
label_243868:
    // 0x243868: 0xc090e2c  jal         func_2438B0
label_24386c:
    if (ctx->pc == 0x24386Cu) {
        ctx->pc = 0x243870u;
        goto label_243870;
    }
    ctx->pc = 0x243868u;
    SET_GPR_U32(ctx, 31, 0x243870u);
    ctx->pc = 0x2438B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2438B0u, 0x243868u, 0x243870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243870u;
label_243870:
    // 0x243870: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_243874:
    if (ctx->pc == 0x243874u) {
        ctx->pc = 0x243874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243870u;
        // 0x243874: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243878u;
        goto label_243878;
    }
    ctx->pc = 0x243870u;
    {
        const bool branch_taken_0x243870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243870) {
            ctx->pc = 0x243874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x243870u;
            // 0x243874: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x243890u;
            goto label_243890;
        }
    }
    ctx->pc = 0x243878u;
label_243878:
    // 0x243878: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x243878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24387c:
    // 0x24387c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24387cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_243880:
    // 0x243880: 0x2484bbb0  addiu       $a0, $a0, -0x4450
    ctx->pc = 0x243880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949808));
label_243884:
    // 0x243884: 0x8090d8a  j           func_243628
label_243888:
    if (ctx->pc == 0x243888u) {
        ctx->pc = 0x243888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243884u;
        // 0x243888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24388Cu;
        goto label_24388c;
    }
    ctx->pc = 0x243884u;
    ctx->pc = 0x243888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243884u;
    // 0x243888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    sub_00243628_0x243628(rdram, ctx, runtime); return;
    ctx->pc = 0x24388Cu;
label_24388c:
    // 0x24388c: 0x0  nop
    ctx->pc = 0x24388cu;
    // NOP
label_243890:
    // 0x243890: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_243894:
    if (ctx->pc == 0x243894u) {
        ctx->pc = 0x243894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243890u;
        // 0x243894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x243898u;
        goto label_243898;
    }
    ctx->pc = 0x243890u;
    {
        const bool branch_taken_0x243890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243890u;
        // 0x243894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243890) {
            ctx->pc = 0x2438A4u;
            goto label_2438a4;
        }
    }
    ctx->pc = 0x243898u;
label_243898:
    // 0x243898: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x243898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
label_24389c:
    // 0x24389c: 0x40f809  jalr        $v0
label_2438a0:
    if (ctx->pc == 0x2438A0u) {
        ctx->pc = 0x2438A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24389Cu;
        // 0x2438a0: 0x248435f8  addiu       $a0, $a0, 0x35F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438A4u;
        goto label_2438a4;
    }
    ctx->pc = 0x24389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2438A4u);
        ctx->pc = 0x2438A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24389Cu;
        // 0x2438a0: 0x248435f8  addiu       $a0, $a0, 0x35F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24389Cu, 0x2438A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2438A4u;
label_2438a4:
    // 0x2438a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2438a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2438a8:
    // 0x2438a8: 0x3e00008  jr          $ra
label_2438ac:
    if (ctx->pc == 0x2438ACu) {
        ctx->pc = 0x2438ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438A8u;
        // 0x2438ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2438B0u;
        goto label_fallthrough_0x2438a8;
    }
    ctx->pc = 0x2438A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2438ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2438A8u;
        // 0x2438ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2438A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2438a8:
    ctx->pc = 0x2438B0u;
}

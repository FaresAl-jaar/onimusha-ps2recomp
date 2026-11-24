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

// Function: sub_0035C7D0
// Address: 0x35c7d0 - 0x35c87c
void sub_0035C7D0_0x35c7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C7D0_0x35c7d0");
#endif

    switch (ctx->pc) {
        case 0x35c7fcu: goto label_35c7fc;
        case 0x35c818u: goto label_35c818;
        case 0x35c85cu: goto label_35c85c;
        default: break;
    }

    ctx->pc = 0x35c7d0u;

    // 0x35c7d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c7d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c7d8: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c7dc: 0x24650560  addiu       $a1, $v1, 0x560
    ctx->pc = 0x35c7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1376));
    // 0x35c7e0: 0x8c630560  lw          $v1, 0x560($v1)
    ctx->pc = 0x35c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1376)));
    // 0x35c7e4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x35C7E4u;
    {
        const bool branch_taken_0x35c7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C7E4u;
        // 0x35c7e8: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c7e4) {
            ctx->pc = 0x35C830u;
            goto label_35c830;
        }
    }
    ctx->pc = 0x35C7ECu;
    // 0x35c7ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35c7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c7f0: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x35c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x35c7f4: 0xc04c68c  jal         func_131A30
    ctx->pc = 0x35C7F4u;
    SET_GPR_U32(ctx, 31, 0x35C7FCu);
    ctx->pc = 0x35C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C7F4u;
    // 0x35c7f8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131A30u, 0x35C7F4u, 0x35C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C7FCu;
label_35c7fc:
    // 0x35c7fc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x35c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x35c800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35c800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c804: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x35c804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x35c808: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x35c808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x35c80c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35c80cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c810: 0xc052214  jal         func_148850
    ctx->pc = 0x35C810u;
    SET_GPR_U32(ctx, 31, 0x35C818u);
    ctx->pc = 0x35C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C810u;
    // 0x35c814: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x35C810u, 0x35C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C818u;
label_35c818:
    // 0x35c818: 0x8f848bbc  lw          $a0, -0x7444($gp)
    ctx->pc = 0x35c818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c81c: 0x8c830560  lw          $v1, 0x560($a0)
    ctx->pc = 0x35c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x35c820: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c824: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x35C824u;
    {
        const bool branch_taken_0x35c824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C824u;
        // 0x35c828: 0xac830560  sw          $v1, 0x560($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c824) {
            ctx->pc = 0x35C870u;
            goto label_35c870;
        }
    }
    ctx->pc = 0x35C82Cu;
    // 0x35c82c: 0x0  nop
    ctx->pc = 0x35c82cu;
    // NOP
label_35c830:
    // 0x35c830: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x35c830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c834: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x35c834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35c838: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x35C838u;
    {
        const bool branch_taken_0x35c838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x35C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C838u;
        // 0x35c83c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c838) {
            ctx->pc = 0x35C870u;
            goto label_35c870;
        }
    }
    ctx->pc = 0x35C840u;
    // 0x35c840: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x35c840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x35c844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35c844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c848: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x35c848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x35c84c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c850: 0x24070300  addiu       $a3, $zero, 0x300
    ctx->pc = 0x35c850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x35c854: 0xc052214  jal         func_148850
    ctx->pc = 0x35C854u;
    SET_GPR_U32(ctx, 31, 0x35C85Cu);
    ctx->pc = 0x35C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C854u;
    // 0x35c858: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x35C854u, 0x35C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C85Cu;
label_35c85c:
    // 0x35c85c: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c860: 0xa0600564  sb          $zero, 0x564($v1)
    ctx->pc = 0x35c860u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1380), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c864: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35c864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c868: 0xac600560  sw          $zero, 0x560($v1)
    ctx->pc = 0x35c868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 0));
    // 0x35c86c: 0x0  nop
    ctx->pc = 0x35c86cu;
    // NOP
label_35c870:
    // 0x35c870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c874: 0x3e00008  jr          $ra
    ctx->pc = 0x35C874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C874u;
        // 0x35c878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C87Cu;
}

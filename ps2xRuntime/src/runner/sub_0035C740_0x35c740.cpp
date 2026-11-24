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

// Function: sub_0035C740
// Address: 0x35c740 - 0x35c7cc
void sub_0035C740_0x35c740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C740_0x35c740");
#endif

    switch (ctx->pc) {
        case 0x35c76cu: goto label_35c76c;
        case 0x35c788u: goto label_35c788;
        default: break;
    }

    ctx->pc = 0x35c740u;

    // 0x35c740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c748: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35c748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c74c: 0x24650560  addiu       $a1, $v1, 0x560
    ctx->pc = 0x35c74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1376));
    // 0x35c750: 0x8c630560  lw          $v1, 0x560($v1)
    ctx->pc = 0x35c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1376)));
    // 0x35c754: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x35C754u;
    {
        const bool branch_taken_0x35c754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C754u;
        // 0x35c758: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c754) {
            ctx->pc = 0x35C7A0u;
            goto label_35c7a0;
        }
    }
    ctx->pc = 0x35C75Cu;
    // 0x35c75c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35c75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c760: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x35c760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x35c764: 0xc04c68c  jal         func_131A30
    ctx->pc = 0x35C764u;
    SET_GPR_U32(ctx, 31, 0x35C76Cu);
    ctx->pc = 0x35C768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C764u;
    // 0x35c768: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131A30u, 0x35C764u, 0x35C76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C76Cu;
label_35c76c:
    // 0x35c76c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x35c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x35c770: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35c770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c774: 0x24848b30  addiu       $a0, $a0, -0x74D0
    ctx->pc = 0x35c774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    // 0x35c778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35c778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c77c: 0x24070300  addiu       $a3, $zero, 0x300
    ctx->pc = 0x35c77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x35c780: 0xc052214  jal         func_148850
    ctx->pc = 0x35C780u;
    SET_GPR_U32(ctx, 31, 0x35C788u);
    ctx->pc = 0x35C784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C780u;
    // 0x35c784: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148850u, 0x35C780u, 0x35C788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C788u;
label_35c788:
    // 0x35c788: 0x8f848bbc  lw          $a0, -0x7444($gp)
    ctx->pc = 0x35c788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c78c: 0x8c830560  lw          $v1, 0x560($a0)
    ctx->pc = 0x35c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1376)));
    // 0x35c790: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c794: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x35C794u;
    {
        const bool branch_taken_0x35c794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C794u;
        // 0x35c798: 0xac830560  sw          $v1, 0x560($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c794) {
            ctx->pc = 0x35C7C0u;
            goto label_35c7c0;
        }
    }
    ctx->pc = 0x35C79Cu;
    // 0x35c79c: 0x0  nop
    ctx->pc = 0x35c79cu;
    // NOP
label_35c7a0:
    // 0x35c7a0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x35c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c7a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x35c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35c7a8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35C7A8u;
    {
        const bool branch_taken_0x35c7a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x35C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C7A8u;
        // 0x35c7ac: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c7a8) {
            ctx->pc = 0x35C7C0u;
            goto label_35c7c0;
        }
    }
    ctx->pc = 0x35C7B0u;
    // 0x35c7b0: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c7b4: 0xa0600564  sb          $zero, 0x564($v1)
    ctx->pc = 0x35c7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1380), (uint8_t)GPR_U32(ctx, 0));
    // 0x35c7b8: 0x8f838bbc  lw          $v1, -0x7444($gp)
    ctx->pc = 0x35c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937532)));
    // 0x35c7bc: 0xac600560  sw          $zero, 0x560($v1)
    ctx->pc = 0x35c7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 0));
label_35c7c0:
    // 0x35c7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x35C7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C7C4u;
        // 0x35c7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C7CCu;
}

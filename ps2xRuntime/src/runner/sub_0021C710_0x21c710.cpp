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

// Function: sub_0021C710
// Address: 0x21c710 - 0x21c798
void sub_0021C710_0x21c710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C710_0x21c710");
#endif

    switch (ctx->pc) {
        case 0x21c750u: goto label_21c750;
        default: break;
    }

    ctx->pc = 0x21c710u;

    // 0x21c710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c718: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c71c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c724: 0x26300a0c  addiu       $s0, $s1, 0xA0C
    ctx->pc = 0x21c724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2572));
    // 0x21c728: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x21c728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x21c72c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C72Cu;
    {
        const bool branch_taken_0x21c72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c72c) {
            ctx->pc = 0x21C730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C72Cu;
            // 0x21c730: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C754u;
            goto label_21c754;
        }
    }
    ctx->pc = 0x21C734u;
    // 0x21c734: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x21c734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x21c738: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21c738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c73c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21C73Cu;
    {
        const bool branch_taken_0x21c73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21c73c) {
            ctx->pc = 0x21C740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C73Cu;
            // 0x21c740: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C754u;
            goto label_21c754;
        }
    }
    ctx->pc = 0x21C744u;
    // 0x21c744: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x21c744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21c748: 0xc087e5e  jal         func_21F978
    ctx->pc = 0x21C748u;
    SET_GPR_U32(ctx, 31, 0x21C750u);
    ctx->pc = 0x21C74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C748u;
    // 0x21c74c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F978u, 0x21C748u, 0x21C750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C750u;
label_21c750:
    // 0x21c750: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x21c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_21c754:
    // 0x21c754: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x21C754u;
    {
        const bool branch_taken_0x21c754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c754) {
            ctx->pc = 0x21C758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C754u;
            // 0x21c758: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C788u;
            goto label_21c788;
        }
    }
    ctx->pc = 0x21C75Cu;
    // 0x21c75c: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x21c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x21c760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21c760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c764: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21C764u;
    {
        const bool branch_taken_0x21c764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C764u;
        // 0x21c768: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c764) {
            ctx->pc = 0x21C788u;
            goto label_21c788;
        }
    }
    ctx->pc = 0x21C76Cu;
    // 0x21c76c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c770: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c774: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x21c774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x21c778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c77c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21c77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c780: 0x8087e5e  j           func_21F978
    ctx->pc = 0x21C780u;
    ctx->pc = 0x21C784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C780u;
    // 0x21c784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    sub_0021F978_0x21f978(rdram, ctx, runtime); return;
    ctx->pc = 0x21C788u;
label_21c788:
    // 0x21c788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c78c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c790: 0x3e00008  jr          $ra
    ctx->pc = 0x21C790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C790u;
        // 0x21c794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C798u;
}

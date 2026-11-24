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

// Function: sub_0020C758
// Address: 0x20c758 - 0x20c800
void sub_0020C758_0x20c758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C758_0x20c758");
#endif

    switch (ctx->pc) {
        case 0x20c784u: goto label_20c784;
        case 0x20c790u: goto label_20c790;
        case 0x20c7a4u: goto label_20c7a4;
        case 0x20c7b0u: goto label_20c7b0;
        case 0x20c7c0u: goto label_20c7c0;
        default: break;
    }

    ctx->pc = 0x20c758u;

    // 0x20c758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c75c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x20c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x20c760: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20c760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20c764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c768: 0x8c5286dc  lw          $s2, -0x7924($v0)
    ctx->pc = 0x20c768u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x4B86DCu));
    // 0x20c76c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20c770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20c774: 0x1643001c  bne         $s2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x20C774u;
    {
        const bool branch_taken_0x20c774 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x20C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C774u;
        // 0x20c778: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c774) {
            ctx->pc = 0x20C7E8u;
            goto label_20c7e8;
        }
    }
    ctx->pc = 0x20C77Cu;
    // 0x20c77c: 0xc081544  jal         func_205510
    ctx->pc = 0x20C77Cu;
    SET_GPR_U32(ctx, 31, 0x20C784u);
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x20C77Cu, 0x20C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C784u;
label_20c784:
    // 0x20c784: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20c784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c788: 0xc082e38  jal         func_20B8E0
    ctx->pc = 0x20C788u;
    SET_GPR_U32(ctx, 31, 0x20C790u);
    ctx->pc = 0x20C78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C788u;
    // 0x20c78c: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8E0u, 0x20C788u, 0x20C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C790u;
label_20c790:
    // 0x20c790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20c790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c794: 0x56120015  bnel        $s0, $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x20C794u;
    {
        const bool branch_taken_0x20c794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x20c794) {
            ctx->pc = 0x20C798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C794u;
            // 0x20c798: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C7ECu;
            goto label_20c7ec;
        }
    }
    ctx->pc = 0x20C79Cu;
    // 0x20c79c: 0xc0831ce  jal         func_20C738
    ctx->pc = 0x20C79Cu;
    SET_GPR_U32(ctx, 31, 0x20C7A4u);
    ctx->pc = 0x20C738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C738u, 0x20C79Cu, 0x20C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7A4u;
label_20c7a4:
    // 0x20c7a4: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20C7A4u;
    {
        const bool branch_taken_0x20c7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x20C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7A4u;
        // 0x20c7a8: 0x2630006c  addiu       $s0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7a4) {
            ctx->pc = 0x20C7CCu;
            goto label_20c7cc;
        }
    }
    ctx->pc = 0x20C7ACu;
    // 0x20c7ac: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x20c7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20c7b0:
    // 0x20c7b0: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C7B0u;
    {
        const bool branch_taken_0x20c7b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7b0) {
            ctx->pc = 0x20C7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C7B0u;
            // 0x20c7b4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C7C4u;
            goto label_20c7c4;
        }
    }
    ctx->pc = 0x20C7B8u;
    // 0x20c7b8: 0xc082a30  jal         func_20A8C0
    ctx->pc = 0x20C7B8u;
    SET_GPR_U32(ctx, 31, 0x20C7C0u);
    ctx->pc = 0x20C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C7B8u;
    // 0x20c7bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A8C0u, 0x20C7B8u, 0x20C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7C0u;
label_20c7c0:
    // 0x20c7c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x20c7c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_20c7c4:
    // 0x20c7c4: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20C7C4u;
    {
        const bool branch_taken_0x20c7c4 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x20C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7C4u;
        // 0x20c7c8: 0x26100304  addiu       $s0, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7c4) {
            ctx->pc = 0x20C7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20c7b0;
        }
    }
    ctx->pc = 0x20C7CCu;
label_20c7cc:
    // 0x20c7cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c7d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c7d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c7d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c7d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20c7d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c7dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20c7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20c7e0: 0x8083144  j           func_20C510
    ctx->pc = 0x20C7E0u;
    ctx->pc = 0x20C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C7E0u;
    // 0x20c7e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C510u;
    sub_0020C510_0x20c510(rdram, ctx, runtime); return;
    ctx->pc = 0x20C7E8u;
label_20c7e8:
    // 0x20c7e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c7ec:
    // 0x20c7ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c7ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c7f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20c7f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c7f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20c7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20c7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x20C7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7F8u;
        // 0x20c7fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C800u;
}

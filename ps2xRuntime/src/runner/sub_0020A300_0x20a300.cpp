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

// Function: sub_0020A300
// Address: 0x20a300 - 0x20a3c4
void sub_0020A300_0x20a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A300_0x20a300");
#endif

    switch (ctx->pc) {
        case 0x20a324u: goto label_20a324;
        case 0x20a34cu: goto label_20a34c;
        case 0x20a364u: goto label_20a364;
        case 0x20a37cu: goto label_20a37c;
        case 0x20a394u: goto label_20a394;
        case 0x20a3acu: goto label_20a3ac;
        default: break;
    }

    ctx->pc = 0x20a300u;

    // 0x20a300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a304: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20a304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20a308: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20a308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a30c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20a30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20a310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a314: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20a318: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20a31c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20A31Cu;
    SET_GPR_U32(ctx, 31, 0x20A324u);
    ctx->pc = 0x20A320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A31Cu;
    // 0x20a320: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20A31Cu, 0x20A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A324u;
label_20a324:
    // 0x20a324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a328: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x20a328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a32c: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x20a32cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20a330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a334: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20a334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a338: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A338u;
    {
        const bool branch_taken_0x20a338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A338u;
        // 0x20a33c: 0x27a90008  addiu       $t1, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a338) {
            ctx->pc = 0x20A358u;
            goto label_20a358;
        }
    }
    ctx->pc = 0x20A340u;
    // 0x20a340: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a344: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20A344u;
    SET_GPR_U32(ctx, 31, 0x20A34Cu);
    ctx->pc = 0x20A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A344u;
    // 0x20a348: 0x24848390  addiu       $a0, $a0, -0x7C70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20A344u, 0x20A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A34Cu;
label_20a34c:
    // 0x20a34c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20A34Cu;
    {
        const bool branch_taken_0x20a34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A34Cu;
        // 0x20a350: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a34c) {
            ctx->pc = 0x20A3B0u;
            goto label_20a3b0;
        }
    }
    ctx->pc = 0x20A354u;
    // 0x20a354: 0x0  nop
    ctx->pc = 0x20a354u;
    // NOP
label_20a358:
    // 0x20a358: 0x8e2601a4  lw          $a2, 0x1A4($s1)
    ctx->pc = 0x20a358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x20a35c: 0xc08c5b2  jal         func_2316C8
    ctx->pc = 0x20A35Cu;
    SET_GPR_U32(ctx, 31, 0x20A364u);
    ctx->pc = 0x20A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A35Cu;
    // 0x20a360: 0x8e310048  lw          $s1, 0x48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2316C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2316C8u, 0x20A35Cu, 0x20A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A364u;
label_20a364:
    // 0x20a364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20a368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a36c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20A36Cu;
    {
        const bool branch_taken_0x20a36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A36Cu;
        // 0x20a370: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a36c) {
            ctx->pc = 0x20A3A0u;
            goto label_20a3a0;
        }
    }
    ctx->pc = 0x20A374u;
    // 0x20a374: 0xc08c63a  jal         func_2318E8
    ctx->pc = 0x20A374u;
    SET_GPR_U32(ctx, 31, 0x20A37Cu);
    ctx->pc = 0x2318E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2318E8u, 0x20A374u, 0x20A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A37Cu;
label_20a37c:
    // 0x20a37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20a37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a380: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x20a380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a384: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20a384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a388: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x20a388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20a38c: 0xc092d28  jal         func_24B4A0
    ctx->pc = 0x20A38Cu;
    SET_GPR_U32(ctx, 31, 0x20A394u);
    ctx->pc = 0x20A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A38Cu;
    // 0x20a390: 0x8fa80008  lw          $t0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B4A0u, 0x20A38Cu, 0x20A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A394u;
label_20a394:
    // 0x20a394: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20A394u;
    {
        const bool branch_taken_0x20a394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A394u;
        // 0x20a398: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a394) {
            ctx->pc = 0x20A3B0u;
            goto label_20a3b0;
        }
    }
    ctx->pc = 0x20A39Cu;
    // 0x20a39c: 0x0  nop
    ctx->pc = 0x20a39cu;
    // NOP
label_20a3a0:
    // 0x20a3a0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a3a4: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20A3A4u;
    SET_GPR_U32(ctx, 31, 0x20A3ACu);
    ctx->pc = 0x20A3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A3A4u;
    // 0x20a3a8: 0x248483c0  addiu       $a0, $a0, -0x7C40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20A3A4u, 0x20A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A3ACu;
label_20a3ac:
    // 0x20a3ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20a3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20a3b0:
    // 0x20a3b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20a3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a3b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20a3b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a3b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20a3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20a3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x20A3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3BCu;
        // 0x20a3c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A3C4u;
}

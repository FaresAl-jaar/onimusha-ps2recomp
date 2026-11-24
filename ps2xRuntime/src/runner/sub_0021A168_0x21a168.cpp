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

// Function: sub_0021A168
// Address: 0x21a168 - 0x21a224
void sub_0021A168_0x21a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A168_0x21a168");
#endif

    switch (ctx->pc) {
        case 0x21a198u: goto label_21a198;
        case 0x21a1b8u: goto label_21a1b8;
        case 0x21a1e4u: goto label_21a1e4;
        case 0x21a1fcu: goto label_21a1fc;
        default: break;
    }

    ctx->pc = 0x21a168u;

    // 0x21a168: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21a168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21a16c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21a16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21a170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a174: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21a174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a178: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21a178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21a17c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21a17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21a180: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21a180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21a184: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x21a184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x21a188: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x21a188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x21a18c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21a18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21a190: 0xc084990  jal         func_212640
    ctx->pc = 0x21A190u;
    SET_GPR_U32(ctx, 31, 0x21A198u);
    ctx->pc = 0x21A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A190u;
    // 0x21a194: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x21A190u, 0x21A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A198u;
label_21a198:
    // 0x21a198: 0x8e021fc0  lw          $v0, 0x1FC0($s0)
    ctx->pc = 0x21a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    // 0x21a19c: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x21a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x21a1a0: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x21A1A0u;
    {
        const bool branch_taken_0x21a1a0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x21A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1A0u;
        // 0x21a1a4: 0x24500180  addiu       $s0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1a0) {
            ctx->pc = 0x21A1F4u;
            goto label_21a1f4;
        }
    }
    ctx->pc = 0x21A1A8u;
    // 0x21a1a8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x21a1a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1ac: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x21a1acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21a1b0: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x21a1b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21a1b4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x21a1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21a1b8:
    // 0x21a1b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21a1bc: 0x50550004  beql        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x21A1BCu;
    {
        const bool branch_taken_0x21a1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x21a1bc) {
            ctx->pc = 0x21A1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A1BCu;
            // 0x21a1c0: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A1D0u;
            goto label_21a1d0;
        }
    }
    ctx->pc = 0x21A1C4u;
    // 0x21a1c4: 0x54540009  bnel        $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A1C4u;
    {
        const bool branch_taken_0x21a1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x21a1c4) {
            ctx->pc = 0x21A1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A1C4u;
            // 0x21a1c8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A1ECu;
            goto label_21a1ec;
        }
    }
    ctx->pc = 0x21A1CCu;
    // 0x21a1cc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x21a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_21a1d0:
    // 0x21a1d0: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x21A1D0u;
    {
        const bool branch_taken_0x21a1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x21a1d0) {
            ctx->pc = 0x21A1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A1D0u;
            // 0x21a1d4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A1ECu;
            goto label_21a1ec;
        }
    }
    ctx->pc = 0x21A1D8u;
    // 0x21a1d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a1dc: 0xc086978  jal         func_21A5E0
    ctx->pc = 0x21A1DCu;
    SET_GPR_U32(ctx, 31, 0x21A1E4u);
    ctx->pc = 0x21A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1DCu;
    // 0x21a1e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5E0u, 0x21A1DCu, 0x21A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1E4u;
label_21a1e4:
    // 0x21a1e4: 0x202900b  movn        $s2, $s0, $v0
    ctx->pc = 0x21a1e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
    // 0x21a1e8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21a1e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_21a1ec:
    // 0x21a1ec: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x21A1ECu;
    {
        const bool branch_taken_0x21a1ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1ECu;
        // 0x21a1f0: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1ec) {
            ctx->pc = 0x21A1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a1b8;
        }
    }
    ctx->pc = 0x21A1F4u;
label_21a1f4:
    // 0x21a1f4: 0xc084996  jal         func_212658
    ctx->pc = 0x21A1F4u;
    SET_GPR_U32(ctx, 31, 0x21A1FCu);
    ctx->pc = 0x21A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1F4u;
    // 0x21a1f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x21A1F4u, 0x21A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A1FCu;
label_21a1fc:
    // 0x21a1fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21a1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a200: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21a200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a204: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21a204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a208: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21a208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a20c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21a20cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21a210: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x21a210u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21a214: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x21a214u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21a218: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21a218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21a21c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A21Cu;
        // 0x21a220: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A224u;
}

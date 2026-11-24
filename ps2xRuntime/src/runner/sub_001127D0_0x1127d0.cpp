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

// Function: sub_001127D0
// Address: 0x1127d0 - 0x1128bc
void sub_001127D0_0x1127d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001127D0_0x1127d0");
#endif

    switch (ctx->pc) {
        case 0x112828u: goto label_112828;
        case 0x112850u: goto label_112850;
        case 0x11286cu: goto label_11286c;
        default: break;
    }

    ctx->pc = 0x1127d0u;

    // 0x1127d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1127d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1127d4: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1127d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1127d8: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1127d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1127dc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1127dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127e0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1127e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1127e4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1127e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127e8: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1127e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1127ec: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1127ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127f0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1127f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1127f4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1127f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127f8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1127f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1127fc: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x1127fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112800: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x112800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x112804: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x112804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112808: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x112808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x11280c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11280cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112810: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x112810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x112814: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x112814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112818: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x112818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11281c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11281cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x112820: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x112820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x112824: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x112824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_112828:
    // 0x112828: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x112828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11282c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11282cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112830: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x112830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112834: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x112834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x112838: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x112838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11283c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11283cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x112840: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x112840u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112844: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x112844u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112848: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x112848u;
    SET_GPR_U32(ctx, 31, 0x112850u);
    ctx->pc = 0x11284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112848u;
    // 0x11284c: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x112848u, 0x112850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112850u;
label_112850:
    // 0x112850: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x112850u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x112854: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x112854u;
    {
        const bool branch_taken_0x112854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x112858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112854u;
        // 0x112858: 0x8fa200c8  lw          $v0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112854) {
            ctx->pc = 0x112888u;
            goto label_112888;
        }
    }
    ctx->pc = 0x11285Cu;
    // 0x11285c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11285Cu;
    {
        const bool branch_taken_0x11285c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11285Cu;
        // 0x112860: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11285c) {
            ctx->pc = 0x112888u;
            goto label_112888;
        }
    }
    ctx->pc = 0x112864u;
    // 0x112864: 0xc043c16  jal         func_10F058
    ctx->pc = 0x112864u;
    SET_GPR_U32(ctx, 31, 0x11286Cu);
    ctx->pc = 0x112868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112864u;
    // 0x112868: 0x2222018  mult        $a0, $s1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F058u, 0x112864u, 0x11286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11286Cu;
label_11286c:
    // 0x11286c: 0x2a23007f  slti        $v1, $s1, 0x7F
    ctx->pc = 0x11286cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x112870: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x112870u;
    {
        const bool branch_taken_0x112870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112870) {
            ctx->pc = 0x112874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112870u;
            // 0x112874: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112878u;
            goto label_112878;
        }
    }
    ctx->pc = 0x112878u;
label_112878:
    // 0x112878: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x112878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x11287c: 0x2a420065  slti        $v0, $s2, 0x65
    ctx->pc = 0x11287cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x112880: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x112880u;
    {
        const bool branch_taken_0x112880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112880u;
        // 0x112884: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112880) {
            ctx->pc = 0x112828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112828;
        }
    }
    ctx->pc = 0x112888u;
label_112888:
    // 0x112888: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x112888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11288c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x11288cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112890: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x112890u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112894: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x112894u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112898: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x112898u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11289c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x11289cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1128a0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1128a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1128a4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1128a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1128a8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1128a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1128ac: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1128acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1128b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1128b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1128b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1128B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1128B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128B4u;
        // 0x1128b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1128B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1128BCu;
}

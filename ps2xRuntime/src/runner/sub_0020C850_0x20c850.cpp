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

// Function: sub_0020C850
// Address: 0x20c850 - 0x20c8f0
void sub_0020C850_0x20c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C850_0x20c850");
#endif

    switch (ctx->pc) {
        case 0x20c874u: goto label_20c874;
        case 0x20c894u: goto label_20c894;
        case 0x20c8a0u: goto label_20c8a0;
        case 0x20c8b8u: goto label_20c8b8;
        case 0x20c8d8u: goto label_20c8d8;
        default: break;
    }

    ctx->pc = 0x20c850u;

    // 0x20c850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20c850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c858: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c85c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20c860: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20c860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c864: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C864u;
    {
        const bool branch_taken_0x20c864 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C864u;
        // 0x20c868: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c864) {
            ctx->pc = 0x20C880u;
            goto label_20c880;
        }
    }
    ctx->pc = 0x20C86Cu;
    // 0x20c86c: 0xc08dd94  jal         func_237650
    ctx->pc = 0x20C86Cu;
    SET_GPR_U32(ctx, 31, 0x20C874u);
    ctx->pc = 0x237650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237650u, 0x20C86Cu, 0x20C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C874u;
label_20c874:
    // 0x20c874: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x20C874u;
    {
        const bool branch_taken_0x20c874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C874u;
        // 0x20c878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c874) {
            ctx->pc = 0x20C8DCu;
            goto label_20c8dc;
        }
    }
    ctx->pc = 0x20C87Cu;
    // 0x20c87c: 0x0  nop
    ctx->pc = 0x20c87cu;
    // NOP
label_20c880:
    // 0x20c880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c884: 0x54c20008  bnel        $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20C884u;
    {
        const bool branch_taken_0x20c884 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c884) {
            ctx->pc = 0x20C888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C884u;
            // 0x20c888: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C8A8u;
            goto label_20c8a8;
        }
    }
    ctx->pc = 0x20C88Cu;
    // 0x20c88c: 0xc08ddae  jal         func_2376B8
    ctx->pc = 0x20C88Cu;
    SET_GPR_U32(ctx, 31, 0x20C894u);
    ctx->pc = 0x2376B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2376B8u, 0x20C88Cu, 0x20C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C894u;
label_20c894:
    // 0x20c894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c898: 0xc08dd94  jal         func_237650
    ctx->pc = 0x20C898u;
    SET_GPR_U32(ctx, 31, 0x20C8A0u);
    ctx->pc = 0x20C89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C898u;
    // 0x20c89c: 0x512821  addu        $a1, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237650u, 0x20C898u, 0x20C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8A0u;
label_20c8a0:
    // 0x20c8a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20C8A0u;
    {
        const bool branch_taken_0x20c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8A0u;
        // 0x20c8a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8a0) {
            ctx->pc = 0x20C8DCu;
            goto label_20c8dc;
        }
    }
    ctx->pc = 0x20C8A8u;
label_20c8a8:
    // 0x20c8a8: 0x54c2000c  bnel        $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20C8A8u;
    {
        const bool branch_taken_0x20c8a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c8a8) {
            ctx->pc = 0x20C8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C8A8u;
            // 0x20c8ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C8DCu;
            goto label_20c8dc;
        }
    }
    ctx->pc = 0x20C8B0u;
    // 0x20c8b0: 0xc08e0f8  jal         func_2383E0
    ctx->pc = 0x20C8B0u;
    SET_GPR_U32(ctx, 31, 0x20C8B8u);
    ctx->pc = 0x2383E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E0u, 0x20C8B0u, 0x20C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8B8u;
label_20c8b8:
    // 0x20c8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c8bc: 0x244507ff  addiu       $a1, $v0, 0x7FF
    ctx->pc = 0x20c8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x20c8c0: 0x24420ffe  addiu       $v0, $v0, 0xFFE
    ctx->pc = 0x20c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4094));
    // 0x20c8c4: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x20c8c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20c8c8: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x20c8c8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x20c8cc: 0x52ac3  sra         $a1, $a1, 11
    ctx->pc = 0x20c8ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    // 0x20c8d0: 0xc08dd94  jal         func_237650
    ctx->pc = 0x20C8D0u;
    SET_GPR_U32(ctx, 31, 0x20C8D8u);
    ctx->pc = 0x20C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8D0u;
    // 0x20c8d4: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237650u, 0x20C8D0u, 0x20C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8D8u;
label_20c8d8:
    // 0x20c8d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c8d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20c8dc:
    // 0x20c8dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20c8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c8e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20c8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c8e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20c8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x20C8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8E8u;
        // 0x20c8ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C8F0u;
}

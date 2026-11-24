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

// Function: sub_002254B0
// Address: 0x2254b0 - 0x225550
void sub_002254B0_0x2254b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002254B0_0x2254b0");
#endif

    switch (ctx->pc) {
        case 0x225530u: goto label_225530;
        default: break;
    }

    ctx->pc = 0x2254b0u;

    // 0x2254b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2254b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2254b4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2254b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2254b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2254b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2254bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2254bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2254c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2254c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2254c4: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x2254c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2254c8: 0x10c3001d  beq         $a2, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2254C8u;
    {
        const bool branch_taken_0x2254c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2254CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254C8u;
        // 0x2254cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254c8) {
            ctx->pc = 0x225540u;
            goto label_225540;
        }
    }
    ctx->pc = 0x2254D0u;
    // 0x2254d0: 0x14c5001b  bne         $a2, $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2254D0u;
    {
        const bool branch_taken_0x2254d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x2254D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254D0u;
        // 0x2254d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254d0) {
            ctx->pc = 0x225540u;
            goto label_225540;
        }
    }
    ctx->pc = 0x2254D8u;
    // 0x2254d8: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x2254d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2254dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2254DCu;
    {
        const bool branch_taken_0x2254dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2254E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254DCu;
        // 0x2254e0: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254dc) {
            ctx->pc = 0x225518u;
            goto label_225518;
        }
    }
    ctx->pc = 0x2254E4u;
    // 0x2254e4: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x2254e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2254e8: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2254E8u;
    {
        const bool branch_taken_0x2254e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2254e8) {
            ctx->pc = 0x2254ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2254E8u;
            // 0x2254ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22553Cu;
            goto label_22553c;
        }
    }
    ctx->pc = 0x2254F0u;
    // 0x2254f0: 0x50b00012  beql        $a1, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2254F0u;
    {
        const bool branch_taken_0x2254f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x2254f0) {
            ctx->pc = 0x2254F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2254F0u;
            // 0x2254f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22553Cu;
            goto label_22553c;
        }
    }
    ctx->pc = 0x2254F8u;
    // 0x2254f8: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2254F8u;
    {
        const bool branch_taken_0x2254f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2254FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254F8u;
        // 0x2254fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254f8) {
            ctx->pc = 0x225540u;
            goto label_225540;
        }
    }
    ctx->pc = 0x225500u;
    // 0x225500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x225500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x225504: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x225504u;
    {
        const bool branch_taken_0x225504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x225508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225504u;
        // 0x225508: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225504) {
            ctx->pc = 0x225528u;
            goto label_225528;
        }
    }
    ctx->pc = 0x22550Cu;
    // 0x22550c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22550Cu;
    {
        const bool branch_taken_0x22550c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22550Cu;
        // 0x225510: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22550c) {
            ctx->pc = 0x225544u;
            goto label_225544;
        }
    }
    ctx->pc = 0x225514u;
    // 0x225514: 0x0  nop
    ctx->pc = 0x225514u;
    // NOP
label_225518:
    // 0x225518: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225518u;
    {
        const bool branch_taken_0x225518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225518u;
        // 0x22551c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225518) {
            ctx->pc = 0x225538u;
            goto label_225538;
        }
    }
    ctx->pc = 0x225520u;
    // 0x225520: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x225520u;
    {
        const bool branch_taken_0x225520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225520u;
        // 0x225524: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225520) {
            ctx->pc = 0x225544u;
            goto label_225544;
        }
    }
    ctx->pc = 0x225528u;
label_225528:
    // 0x225528: 0xc089442  jal         func_225108
    ctx->pc = 0x225528u;
    SET_GPR_U32(ctx, 31, 0x225530u);
    ctx->pc = 0x22552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225528u;
    // 0x22552c: 0x8c840030  lw          $a0, 0x30($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225108u, 0x225528u, 0x225530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225530u;
label_225530:
    // 0x225530: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225530u;
    {
        const bool branch_taken_0x225530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x225534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225530u;
        // 0x225534: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225530) {
            ctx->pc = 0x225540u;
            goto label_225540;
        }
    }
    ctx->pc = 0x225538u;
label_225538:
    // 0x225538: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x225538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22553c:
    // 0x22553c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22553cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225540:
    // 0x225540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225544:
    // 0x225544: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x225544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225548: 0x3e00008  jr          $ra
    ctx->pc = 0x225548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225548u;
        // 0x22554c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225550u;
}

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

// Function: sub_0012C510
// Address: 0x12c510 - 0x12c57c
void sub_0012C510_0x12c510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C510_0x12c510");
#endif

    switch (ctx->pc) {
        case 0x12c530u: goto label_12c530;
        case 0x12c55cu: goto label_12c55c;
        case 0x12c564u: goto label_12c564;
        default: break;
    }

    ctx->pc = 0x12c510u;

    // 0x12c510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c518: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c51c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12c51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c524: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12c524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c528: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x12C528u;
    SET_GPR_U32(ctx, 31, 0x12C530u);
    ctx->pc = 0x12C52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C528u;
    // 0x12c52c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x12C528u, 0x12C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C530u;
label_12c530:
    // 0x12c530: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c534: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C534u;
    {
        const bool branch_taken_0x12c534 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x12C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C534u;
        // 0x12c538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c534) {
            ctx->pc = 0x12C554u;
            goto label_12c554;
        }
    }
    ctx->pc = 0x12C53Cu;
    // 0x12c53c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c54c: 0x804b104  j           func_12C410
    ctx->pc = 0x12C54Cu;
    ctx->pc = 0x12C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C54Cu;
    // 0x12c550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C410u;
    sub_0012C410_0x12c410(rdram, ctx, runtime); return;
    ctx->pc = 0x12C554u;
label_12c554:
    // 0x12c554: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x12C554u;
    SET_GPR_U32(ctx, 31, 0x12C55Cu);
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x12C554u, 0x12C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C55Cu;
label_12c55c:
    // 0x12c55c: 0xc04b104  jal         func_12C410
    ctx->pc = 0x12C55Cu;
    SET_GPR_U32(ctx, 31, 0x12C564u);
    ctx->pc = 0x12C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C55Cu;
    // 0x12c560: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C410u, 0x12C55Cu, 0x12C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C564u;
label_12c564:
    // 0x12c564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c568: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x12c568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x12c56c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c574: 0x3e00008  jr          $ra
    ctx->pc = 0x12C574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C574u;
        // 0x12c578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C57Cu;
}

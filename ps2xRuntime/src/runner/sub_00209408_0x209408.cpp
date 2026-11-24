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

// Function: sub_00209408
// Address: 0x209408 - 0x209468
void sub_00209408_0x209408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209408_0x209408");
#endif

    switch (ctx->pc) {
        case 0x20941cu: goto label_20941c;
        case 0x20944cu: goto label_20944c;
        default: break;
    }

    ctx->pc = 0x209408u;

    // 0x209408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20940c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209410: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x209410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x209414: 0xc0824d0  jal         func_209340
    ctx->pc = 0x209414u;
    SET_GPR_U32(ctx, 31, 0x20941Cu);
    ctx->pc = 0x209418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209414u;
    // 0x209418: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209340u, 0x209414u, 0x20941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20941Cu;
label_20941c:
    // 0x20941c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209420: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x209420u;
    {
        const bool branch_taken_0x209420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x209420) {
            ctx->pc = 0x209424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209420u;
            // 0x209424: 0x8e03017c  lw          $v1, 0x17C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209430u;
            goto label_209430;
        }
    }
    ctx->pc = 0x209428u;
    // 0x209428: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x209428u;
    {
        const bool branch_taken_0x209428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209428u;
        // 0x20942c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209428) {
            ctx->pc = 0x209458u;
            goto label_209458;
        }
    }
    ctx->pc = 0x209430u;
label_209430:
    // 0x209430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x209430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209434: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x209434u;
    {
        const bool branch_taken_0x209434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209434u;
        // 0x209438: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209434) {
            ctx->pc = 0x209458u;
            goto label_209458;
        }
    }
    ctx->pc = 0x20943Cu;
    // 0x20943c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x20943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x209440: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x209440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209444: 0xc088c06  jal         func_223018
    ctx->pc = 0x209444u;
    SET_GPR_U32(ctx, 31, 0x20944Cu);
    ctx->pc = 0x209448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209444u;
    // 0x209448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223018u, 0x209444u, 0x20944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20944Cu;
label_20944c:
    // 0x20944c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209450: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x209450u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x209454: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x209454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_209458:
    // 0x209458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20945c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20945cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209460: 0x3e00008  jr          $ra
    ctx->pc = 0x209460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209460u;
        // 0x209464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209468u;
}

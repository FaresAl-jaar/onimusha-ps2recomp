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

// Function: sub_00202410
// Address: 0x202410 - 0x20246c
void sub_00202410_0x202410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202410_0x202410");
#endif

    switch (ctx->pc) {
        case 0x202434u: goto label_202434;
        case 0x202448u: goto label_202448;
        case 0x202454u: goto label_202454;
        default: break;
    }

    ctx->pc = 0x202410u;

    // 0x202410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x202414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x202418: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x202418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20241c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20241cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202420: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x202420u;
    {
        const bool branch_taken_0x202420 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x202424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202420u;
        // 0x202424: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202420) {
            ctx->pc = 0x202440u;
            goto label_202440;
        }
    }
    ctx->pc = 0x202428u;
    // 0x202428: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x202428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x20242c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x20242Cu;
    SET_GPR_U32(ctx, 31, 0x202434u);
    ctx->pc = 0x202430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20242Cu;
    // 0x202430: 0x24846528  addiu       $a0, $a0, 0x6528 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x20242Cu, 0x202434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202434u;
label_202434:
    // 0x202434: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202434u;
    {
        const bool branch_taken_0x202434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202434u;
        // 0x202438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202434) {
            ctx->pc = 0x202458u;
            goto label_202458;
        }
    }
    ctx->pc = 0x20243Cu;
    // 0x20243c: 0x0  nop
    ctx->pc = 0x20243cu;
    // NOP
label_202440:
    // 0x202440: 0xc0808c0  jal         func_202300
    ctx->pc = 0x202440u;
    SET_GPR_U32(ctx, 31, 0x202448u);
    ctx->pc = 0x202300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202300u, 0x202440u, 0x202448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202448u;
label_202448:
    // 0x202448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20244c: 0xc0808ee  jal         func_2023B8
    ctx->pc = 0x20244Cu;
    SET_GPR_U32(ctx, 31, 0x202454u);
    ctx->pc = 0x202450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20244Cu;
    // 0x202450: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B8u, 0x20244Cu, 0x202454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202454u;
label_202454:
    // 0x202454: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x202454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_202458:
    // 0x202458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20245c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20245cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x202460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x202460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202464: 0x3e00008  jr          $ra
    ctx->pc = 0x202464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202464u;
        // 0x202468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20246Cu;
}

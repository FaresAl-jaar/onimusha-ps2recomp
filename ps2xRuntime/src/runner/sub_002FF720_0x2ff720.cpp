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

// Function: sub_002FF720
// Address: 0x2ff720 - 0x2ff780
void sub_002FF720_0x2ff720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF720_0x2ff720");
#endif

    switch (ctx->pc) {
        case 0x2ff750u: goto label_2ff750;
        case 0x2ff768u: goto label_2ff768;
        default: break;
    }

    ctx->pc = 0x2ff720u;

    // 0x2ff720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ff720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ff724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ff724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ff728: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ff728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ff72c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ff72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ff730: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ff730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff734: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2FF734u;
    {
        const bool branch_taken_0x2ff734 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF734u;
        // 0x2ff738: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff734) {
            ctx->pc = 0x2FF768u;
            goto label_2ff768;
        }
    }
    ctx->pc = 0x2FF73Cu;
    // 0x2ff73c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ff73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2ff740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ff740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff744: 0x24427fd0  addiu       $v0, $v0, 0x7FD0
    ctx->pc = 0x2ff744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32720));
    // 0x2ff748: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x2FF748u;
    SET_GPR_U32(ctx, 31, 0x2FF750u);
    ctx->pc = 0x2FF74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF748u;
    // 0x2ff74c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x2FF748u, 0x2FF750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF750u;
label_2ff750:
    // 0x2ff750: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ff750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2ff754: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ff754u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ff758: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF758u;
    {
        const bool branch_taken_0x2ff758 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2FF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF758u;
        // 0x2ff75c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff758) {
            ctx->pc = 0x2FF768u;
            goto label_2ff768;
        }
    }
    ctx->pc = 0x2FF760u;
    // 0x2ff760: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2FF760u;
    SET_GPR_U32(ctx, 31, 0x2FF768u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2FF760u, 0x2FF768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF768u;
label_2ff768:
    // 0x2ff768: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ff768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff76c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ff76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ff770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ff770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ff774: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ff774u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff778: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF778u;
        // 0x2ff77c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF780u;
}

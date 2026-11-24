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

// Function: sub_003574D0
// Address: 0x3574d0 - 0x357530
void sub_003574D0_0x3574d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003574D0_0x3574d0");
#endif

    switch (ctx->pc) {
        case 0x357500u: goto label_357500;
        case 0x357518u: goto label_357518;
        default: break;
    }

    ctx->pc = 0x3574d0u;

    // 0x3574d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3574d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3574d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3574d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3574d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3574d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3574dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3574dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3574e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3574e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3574e4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3574E4u;
    {
        const bool branch_taken_0x3574e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3574E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3574E4u;
        // 0x3574e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3574e4) {
            ctx->pc = 0x357518u;
            goto label_357518;
        }
    }
    ctx->pc = 0x3574ECu;
    // 0x3574ec: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x3574ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x3574f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3574f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3574f4: 0x24429090  addiu       $v0, $v0, -0x6F70
    ctx->pc = 0x3574f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938768));
    // 0x3574f8: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x3574F8u;
    SET_GPR_U32(ctx, 31, 0x357500u);
    ctx->pc = 0x3574FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3574F8u;
    // 0x3574fc: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x3574F8u, 0x357500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357500u;
label_357500:
    // 0x357500: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x357500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x357504: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x357504u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x357508: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357508u;
    {
        const bool branch_taken_0x357508 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x35750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357508u;
        // 0x35750c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357508) {
            ctx->pc = 0x357518u;
            goto label_357518;
        }
    }
    ctx->pc = 0x357510u;
    // 0x357510: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x357510u;
    SET_GPR_U32(ctx, 31, 0x357518u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x357510u, 0x357518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357518u;
label_357518:
    // 0x357518: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x357518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35751c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35751cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357520: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357528: 0x3e00008  jr          $ra
    ctx->pc = 0x357528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357528u;
        // 0x35752c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357530u;
}

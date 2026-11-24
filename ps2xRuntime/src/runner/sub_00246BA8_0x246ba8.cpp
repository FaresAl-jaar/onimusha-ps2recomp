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

// Function: sub_00246BA8
// Address: 0x246ba8 - 0x246c1c
void sub_00246BA8_0x246ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246BA8_0x246ba8");
#endif

    switch (ctx->pc) {
        case 0x246bccu: goto label_246bcc;
        case 0x246bdcu: goto label_246bdc;
        case 0x246bf8u: goto label_246bf8;
        case 0x246c00u: goto label_246c00;
        default: break;
    }

    ctx->pc = 0x246ba8u;

    // 0x246ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x246bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246bb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x246bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x246bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x246bb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x246bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246bbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x246bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x246bc0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x246bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x246bc4: 0xc091a7e  jal         func_2469F8
    ctx->pc = 0x246BC4u;
    SET_GPR_U32(ctx, 31, 0x246BCCu);
    ctx->pc = 0x246BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BC4u;
    // 0x246bc8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2469F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2469F8u, 0x246BC4u, 0x246BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BCCu;
label_246bcc:
    // 0x246bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246bd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246bd4: 0xc044fb8  jal         func_113EE0
    ctx->pc = 0x246BD4u;
    SET_GPR_U32(ctx, 31, 0x246BDCu);
    ctx->pc = 0x246BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246BD4u;
    // 0x246bd8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EE0u, 0x246BD4u, 0x246BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BDCu;
label_246bdc:
    // 0x246bdc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x246be0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246be4: 0x2484cb50  addiu       $a0, $a0, -0x34B0
    ctx->pc = 0x246be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953808));
    // 0x246be8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246BE8u;
    {
        const bool branch_taken_0x246be8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x246BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BE8u;
        // 0x246bec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246be8) {
            ctx->pc = 0x246BF8u;
            goto label_246bf8;
        }
    }
    ctx->pc = 0x246BF0u;
    // 0x246bf0: 0xc044332  jal         func_110CC8
    ctx->pc = 0x246BF0u;
    SET_GPR_U32(ctx, 31, 0x246BF8u);
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x246BF0u, 0x246BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246BF8u;
label_246bf8:
    // 0x246bf8: 0xc091a8c  jal         func_246A30
    ctx->pc = 0x246BF8u;
    SET_GPR_U32(ctx, 31, 0x246C00u);
    ctx->pc = 0x246A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246A30u, 0x246BF8u, 0x246C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246C00u;
label_246c00:
    // 0x246c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x246c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246c08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246c0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x246c0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246c10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x246c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x246c14: 0x3e00008  jr          $ra
    ctx->pc = 0x246C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C14u;
        // 0x246c18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246C1Cu;
}

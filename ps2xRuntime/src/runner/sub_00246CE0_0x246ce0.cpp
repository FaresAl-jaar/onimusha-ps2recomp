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

// Function: sub_00246CE0
// Address: 0x246ce0 - 0x246d54
void sub_00246CE0_0x246ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246CE0_0x246ce0");
#endif

    switch (ctx->pc) {
        case 0x246d04u: goto label_246d04;
        case 0x246d14u: goto label_246d14;
        case 0x246d30u: goto label_246d30;
        case 0x246d38u: goto label_246d38;
        default: break;
    }

    ctx->pc = 0x246ce0u;

    // 0x246ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x246ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246ce8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x246ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x246cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x246cf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x246cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x246cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x246cf8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x246cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x246cfc: 0xc091a7e  jal         func_2469F8
    ctx->pc = 0x246CFCu;
    SET_GPR_U32(ctx, 31, 0x246D04u);
    ctx->pc = 0x246D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CFCu;
    // 0x246d00: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2469F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2469F8u, 0x246CFCu, 0x246D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D04u;
label_246d04:
    // 0x246d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d0c: 0xc044e6c  jal         func_1139B0
    ctx->pc = 0x246D0Cu;
    SET_GPR_U32(ctx, 31, 0x246D14u);
    ctx->pc = 0x246D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246D0Cu;
    // 0x246d10: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1139B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1139B0u, 0x246D0Cu, 0x246D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D14u;
label_246d14:
    // 0x246d14: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x246d18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d1c: 0x2484cbb0  addiu       $a0, $a0, -0x3450
    ctx->pc = 0x246d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953904));
    // 0x246d20: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246D20u;
    {
        const bool branch_taken_0x246d20 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x246D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D20u;
        // 0x246d24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d20) {
            ctx->pc = 0x246D30u;
            goto label_246d30;
        }
    }
    ctx->pc = 0x246D28u;
    // 0x246d28: 0xc044332  jal         func_110CC8
    ctx->pc = 0x246D28u;
    SET_GPR_U32(ctx, 31, 0x246D30u);
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x246D28u, 0x246D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D30u;
label_246d30:
    // 0x246d30: 0xc091a8c  jal         func_246A30
    ctx->pc = 0x246D30u;
    SET_GPR_U32(ctx, 31, 0x246D38u);
    ctx->pc = 0x246A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246A30u, 0x246D30u, 0x246D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246D38u;
label_246d38:
    // 0x246d38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x246d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246d3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246d40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246d40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246d44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x246d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246d48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x246d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x246d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x246D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D4Cu;
        // 0x246d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246D54u;
}

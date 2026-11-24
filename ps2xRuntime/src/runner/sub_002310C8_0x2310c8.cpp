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

// Function: sub_002310C8
// Address: 0x2310c8 - 0x231120
void sub_002310C8_0x2310c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002310C8_0x2310c8");
#endif

    switch (ctx->pc) {
        case 0x2310ecu: goto label_2310ec;
        case 0x2310fcu: goto label_2310fc;
        case 0x231104u: goto label_231104;
        default: break;
    }

    ctx->pc = 0x2310c8u;

    // 0x2310c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2310c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2310cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2310ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2310d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2310d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2310d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2310d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2310d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2310d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2310dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2310dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2310e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2310e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2310e4: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x2310E4u;
    SET_GPR_U32(ctx, 31, 0x2310ECu);
    ctx->pc = 0x2310E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2310E4u;
    // 0x2310e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x2310E4u, 0x2310ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310ECu;
label_2310ec:
    // 0x2310ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2310ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2310f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2310f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2310f4: 0xc08c448  jal         func_231120
    ctx->pc = 0x2310F4u;
    SET_GPR_U32(ctx, 31, 0x2310FCu);
    ctx->pc = 0x2310F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2310F4u;
    // 0x2310f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231120u, 0x2310F4u, 0x2310FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310FCu;
label_2310fc:
    // 0x2310fc: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x2310FCu;
    SET_GPR_U32(ctx, 31, 0x231104u);
    ctx->pc = 0x231100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2310FCu;
    // 0x231100: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x2310FCu, 0x231104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231104u;
label_231104:
    // 0x231104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x231104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231108: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x231108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23110c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23110cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231114: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x231114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231118: 0x3e00008  jr          $ra
    ctx->pc = 0x231118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231118u;
        // 0x23111c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231120u;
}

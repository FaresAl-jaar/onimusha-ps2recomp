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

// Function: sub_00239108
// Address: 0x239108 - 0x239160
void sub_00239108_0x239108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239108_0x239108");
#endif

    switch (ctx->pc) {
        case 0x23912cu: goto label_23912c;
        case 0x23913cu: goto label_23913c;
        case 0x239144u: goto label_239144;
        default: break;
    }

    ctx->pc = 0x239108u;

    // 0x239108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23910c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23910cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239118: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x239118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23911c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239120: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x239120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x239124: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x239124u;
    SET_GPR_U32(ctx, 31, 0x23912Cu);
    ctx->pc = 0x239128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239124u;
    // 0x239128: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x239124u, 0x23912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23912Cu;
label_23912c:
    // 0x23912c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23912cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x239130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239134: 0xc08e458  jal         func_239160
    ctx->pc = 0x239134u;
    SET_GPR_U32(ctx, 31, 0x23913Cu);
    ctx->pc = 0x239138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239134u;
    // 0x239138: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239160u, 0x239134u, 0x23913Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23913Cu;
label_23913c:
    // 0x23913c: 0xc08b536  jal         func_22D4D8
    ctx->pc = 0x23913Cu;
    SET_GPR_U32(ctx, 31, 0x239144u);
    ctx->pc = 0x239140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23913Cu;
    // 0x239140: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D8u, 0x23913Cu, 0x239144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239144u;
label_239144:
    // 0x239144: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239148: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x239148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23914c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23914cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239154: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x239154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x239158: 0x3e00008  jr          $ra
    ctx->pc = 0x239158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239158u;
        // 0x23915c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239160u;
}

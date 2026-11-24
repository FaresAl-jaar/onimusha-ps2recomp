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

// Function: sub_002514B8
// Address: 0x2514b8 - 0x251510
void sub_002514B8_0x2514b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002514B8_0x2514b8");
#endif

    switch (ctx->pc) {
        case 0x2514dcu: goto label_2514dc;
        case 0x2514ecu: goto label_2514ec;
        case 0x2514f4u: goto label_2514f4;
        default: break;
    }

    ctx->pc = 0x2514b8u;

    // 0x2514b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2514b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2514bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2514bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2514c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2514c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2514c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2514c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2514c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2514ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2514d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2514d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2514d4: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x2514D4u;
    SET_GPR_U32(ctx, 31, 0x2514DCu);
    ctx->pc = 0x2514D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2514D4u;
    // 0x2514d8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x2514D4u, 0x2514DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514DCu;
label_2514dc:
    // 0x2514dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2514dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2514e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514e4: 0xc094544  jal         func_251510
    ctx->pc = 0x2514E4u;
    SET_GPR_U32(ctx, 31, 0x2514ECu);
    ctx->pc = 0x2514E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2514E4u;
    // 0x2514e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251510u, 0x2514E4u, 0x2514ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514ECu;
label_2514ec:
    // 0x2514ec: 0xc093f40  jal         func_24FD00
    ctx->pc = 0x2514ECu;
    SET_GPR_U32(ctx, 31, 0x2514F4u);
    ctx->pc = 0x2514F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2514ECu;
    // 0x2514f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x2514ECu, 0x2514F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514F4u;
label_2514f4:
    // 0x2514f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2514f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2514f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2514f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2514fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251504: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x251504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251508: 0x3e00008  jr          $ra
    ctx->pc = 0x251508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251508u;
        // 0x25150c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251510u;
}

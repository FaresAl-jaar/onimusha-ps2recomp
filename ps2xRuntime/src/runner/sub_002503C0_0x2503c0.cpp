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

// Function: sub_002503C0
// Address: 0x2503c0 - 0x25040c
void sub_002503C0_0x2503c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002503C0_0x2503c0");
#endif

    switch (ctx->pc) {
        case 0x2503e4u: goto label_2503e4;
        case 0x2503f4u: goto label_2503f4;
        default: break;
    }

    ctx->pc = 0x2503c0u;

    // 0x2503c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2503c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2503c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2503c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2503c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2503c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2503cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2503ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2503d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2503d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2503d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2503d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2503d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2503d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2503dc: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x2503DCu;
    SET_GPR_U32(ctx, 31, 0x2503E4u);
    ctx->pc = 0x2503E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2503DCu;
    // 0x2503e0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x2503DCu, 0x2503E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503E4u;
label_2503e4:
    // 0x2503e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2503e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2503e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2503e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2503ec: 0xc094104  jal         func_250410
    ctx->pc = 0x2503ECu;
    SET_GPR_U32(ctx, 31, 0x2503F4u);
    ctx->pc = 0x2503F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2503ECu;
    // 0x2503f0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250410u, 0x2503ECu, 0x2503F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2503F4u;
label_2503f4:
    // 0x2503f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2503f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2503f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2503f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2503fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2503fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250400: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x250400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x250404: 0x8093f40  j           func_24FD00
    ctx->pc = 0x250404u;
    ctx->pc = 0x250408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250404u;
    // 0x250408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x25040Cu;
}
